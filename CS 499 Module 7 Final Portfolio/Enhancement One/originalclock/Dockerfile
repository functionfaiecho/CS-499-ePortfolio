# Use the GCC image version 4.9 as the base image because it works with the code I wrote
FROM gcc:4.9

# Copy everything from my local directory to the container, where the app will be at /usr/src/myapp
COPY . /usr/src/myapp

# Set the working directory inside the container to /usr/src/myapp
WORKDIR /usr/src/myapp

# Compile the C++ files (Clock.cpp and main.cpp) into an executable called "main"
# The -o flag is for naming the output file
RUN g++ -o main Clock.cpp main.cpp

# When the container runs, it should execute the "main" program by default
CMD ["./main"]
