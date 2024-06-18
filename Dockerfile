
# I want to specify a version for c++
FROM gcc:11 AS builder

# Sets the working directory inside the container to /app.
WORKDIR /app

# Install cmake in the Dockerfile:
RUN apt-get update && apt-get install -y cmake

# Get gtest source code
RUN git clone https://github.com/google/googletest.git
# Build gtest
WORKDIR /app/googletest

RUN cmake -H. -Bbuild && cmake --build build && apt-get update && apt-get install -y libgtest-dev

# Copy all files to the working directory in the container
WORKDIR /app
COPY /Source/* .

# This line builds your C++ code using g++ and creates an executable named hello.
#RUN g++ main.cpp -o hello
# Link with gtest libraries
RUN g++ main.cpp -o hello -lgtest -lgtest_main  



#This line defines the default command to run when the container starts. It specifies the path to your executable inside the container.
#CMD ["/app/hello"]
CMD ["/app/hello", "--gtest_filter=*.Test"]