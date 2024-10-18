# CS 210 - Programming Languages (Clock App) - Enhancement for CS 499

## Introduction

This C++ application is a static clock which takes user input (through the numbers 1, 2, 3 and 4) to add an hour, second or time to its interface. It was completed as the final project in CS 210 - Programming Languages. The enhancement on this project is a front-end created in Next JS 14, Tailwind and TypeScript. In this application, the 12 and 24 hour clocks change in parallel. A deployed version of the enhancement may be accessed [here](http://enhancedclock.up.railway.app).
## Table of Contents

1. [Running the original application (C++)](#running-the-original-application-c)
   
    - [How to use the original application](#how-to-use-the-original-application)

2. [Running the enhanced application (with front-end)](#running-the-enhanced-application-with-front-end)
   
    - [How to use the enhanced application](#how-to-use-the-enhanced-application)

3. [Future Developments](#future-developments)

## Running the original application (C++)

- First, ensure that you have [Docker](https://www.docker.com/products/docker-desktop/) on your computer.

- Clone the repository to your computer using ```git clone https://github.com/functionfaiecho/enhancedclock.git```.

- Then, navigate to the ```originalclock``` folder in the directory.

-  Build the Docker image using ```docker build -t cpp-clock-app .```.

- Run the container: ```docker run --rm -it --name cs210 cpp-clock-app```. 

Once successful, the application will display a menu in terminal. Enjoy!

### How to use the original application

- Number (1): Adds an hour to the clock.

- Number (2): Adds a minute to the clock.

- Number (3): Adds a second to the clock.

- Number (4): Exits the program.

## Running the enhanced application (with front-end)

- First, ensure that you have [Docker](https://www.docker.com/products/docker-desktop/) on your computer.

- Clone the repository to your computer using ```git clone https://github.com/functionfaiecho/enhancedclock.git```.

-  Build the Docker image using ```docker build -t enhancedclock .```.

- Once successful, run ```docker run -it -p 3000:3000 enhancedclock```.

### How to use the (enhanced) application

- Use the up and down arrows to manipulate the time.

- To change between AM and PM timing, click on AM or PM next to the 12-hour clock. The timing on the 24 hour clock will change accordingly.


## Future Developments

1. **Live Clock** - A dynamically-updated clock based on the user's computer time.

2. World Clock Alarm (Clock) - For the gamers who need to get synchronised with their squad for tournaments.




