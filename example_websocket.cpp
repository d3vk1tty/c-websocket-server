#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <iostream>
#include <string>
#include <thread>

using tcp = boost::asio::ip::tcp;

int main() {
    auto const address = boost::asio::ip::make_address("127.0.0.1");
    auto const port = static_cast<unsigned short>(std::atoi("8085"));

    //iocontext calls on operating system to perform the connection operation
    boost::asio::io_context ioc{1};

    tcp::acceptor acceptor{ioc, {address, port}};

    while(1) {
        //wait for request then accept
        tcp::socket socket{ioc};
        acceptor.accept(socket);
        std::cout << "socket accepted" << std::endl;

        //create a new thread
        std::thread{[q {std::move(socket)}]() {
                boost::beast::websocket::stream<tcp::socket> ws {std::move(const_cast<tcp::socket&>(q))};
                ws.accept();

                while(1) {
                    try{
                        boost::beast::flat_buffer buffer;
                        ws.read(buffer);
                        auto out = boost::beast::buffers_to_string(buffer.cdata());
                        std::cout << out << std::endl;

                        ws.write(buffer.data());
                    }
                    catch(boost::beast::system_error const &se){
                        if(se.code() != boost::beast::websocket::error::closed) {
                            std::cout << se.code().message() << std::endl;
                            break;
                        }
                    }
                }
            }
        }.detach();
    }

    return 0;
}