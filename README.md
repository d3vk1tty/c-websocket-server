# Simple C++ Websocket Server
> This github repository documents my education of websocket programming with C++ 

This repository documents my journey with socket programming.

## Installation

OS X & Linux:

```sh
git clone git@github.com:d3vk1tty/c-websocket-server.git
```

## Usage example

This can be used to establish a connection and exchange information through TCP using the boost library.

Compile and execute [example_websocket.cpp](https://github.com/d3vk1tty/c-websocket-server/blob/main/example_websocket.cpp)

```sh
> g++ -I /usr/include/boost/ -pthread example_websocket.cpp -o websocket
> ./websocket
socket accepted  #connection opened
asd #request echo'd back to the client
Operation canceled #connection closed
```





## Development setup

Describe how to install all development dependencies and how to run an automated test-suite of some kind. Potentially do this for multiple platforms.

```sh
sudo apt install libboost-all-dev
```

For convenience use the plugin Simple Websocket Client for [Chrome](https://chrome.google.com/webstore/detail/simple-websocket-client/pfdhoblngboilpfeibdedpjgfnlcodoo) or [Firefox](https://addons.mozilla.org/en-US/firefox/addon/simple-websocket-client/)

## Release History

* 0.0.1
    * Work in progress

## Meta

Dev Kitty :3 – [@d3vk1tty](https://twitter.com/d3vk1tty) – admin@devkitty.org

Distributed under the MIT license. See ``LICENSE`` for more information.

[https://github.com/d3vk1tty/c-websocket-server](https://github.com/d3vk1tty/)

## Contributing

1. Fork it (<https://github.com/d3vk1tty/c-websocket-server/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request