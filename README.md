# Simple C++ Websocket Server
> This github repository documents my education of websocket programming with C++ 

This repository documents my journey with socket programming.

## Installation

OS X & Linux:

```sh
git clone git@github.com:d3vk1tty/c-websocket-server.git
```

<p align="right">(<a href="#top">back to top</a>)</p>

## Usage example

This can be used to establish a connection and exchange information through TCP using the boost library.

Compile and execute [example_websocket.cpp](https://github.com/d3vk1tty/c-websocket-server/blob/main/example_websocket.cpp)

```sh
> g++ -I /usr/include/boost/ -pthread example_websocket.cpp -o websocket
> g++ -I /usr/include/boost/ -pthread websocket_client.cpp -o websocket_client
> ./websocket
> ./websocket_client 127.0.0.1 8085 "client message"
socket accepted #connection opened
client message #server echo client message
Operation canceled #connection closed
```

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- ROADMAP -->
## Roadmap

- [ ] Implement [example_websocket.cpp](https://github.com/d3vk1tty/c-websocket-server/blob/main/example_websocket.cpp) and [websocket_client.cpp](https://github.com/d3vk1tty/c-websocket-server/blob/main/websocket_client.cpp) into a lightweight reusable class
- [x] Add back to top links

See the [open issues](https://github.com/othneildrew/Best-README-Template/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>


## Development setup

Describe how to install all development dependencies and how to run an automated test-suite of some kind. Potentially do this for multiple platforms.

```sh
sudo apt install libboost-all-dev
```

For convenience use the plugin Simple Websocket Client for [Chrome](https://chrome.google.com/webstore/detail/simple-websocket-client/pfdhoblngboilpfeibdedpjgfnlcodoo) or [Firefox](https://addons.mozilla.org/en-US/firefox/addon/simple-websocket-client/)

<p align="right">(<a href="#top">back to top</a>)</p>

## Release History

* 0.0.1
    * Work in progress

<p align="right">(<a href="#top">back to top</a>)</p>

## Meta

Dev Kitty :3 ??? [@d3vk1tty](https://twitter.com/d3vk1tty) ??? admin@devkitty.org

Distributed under the MIT license. See ``LICENSE`` for more information.

[https://github.com/d3vk1tty/c-websocket-server](https://github.com/d3vk1tty/)

<p align="right">(<a href="#top">back to top</a>)</p>

## Contributing

1. Fork it (<https://github.com/d3vk1tty/c-websocket-server/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>
