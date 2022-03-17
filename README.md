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

## Development setup

Describe how to install all development dependencies and how to run an automated test-suite of some kind. Potentially do this for multiple platforms.



```sh
sudo apt install libboost-all-dev
g++ -I /usr/include/boost/ -pthread example_websocket.cpp -o websocket
./websocket
```

For convenience use the plugin Simple Websocket Client for [Chrome][https://chrome.google.com/webstore/detail/simple-websocket-client/pfdhoblngboilpfeibdedpjgfnlcodoo] or [Firefox][https://chrome.google.com/webstore/detail/simple-websocket-client/pfdhoblngboilpfeibdedpjgfnlcodoo]

## Release History

* 0.0.1
    * Work in progress

## Meta

Your Name – [@d3vk1tty](https://twitter.com/d3vk1tty) – admin@devkitty.org

Distributed under the MIT license. See ``LICENSE`` for more information.

[https://github.com/d3vk1tty/c-websocket-server](https://github.com/d3vk1tty/)

## Contributing

1. Fork it (<https://github.com/d3vk1tty/c-websocket-server/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request