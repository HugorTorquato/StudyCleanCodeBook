
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
COPY /code/* .

# This line builds your C++ code using g++ and creates an executable named hello.
# It needs to create one for the code itself and another one for the unittests
    # To run tem open the attach shell, go to the working directory and execute the files
    # ./main
    # ./main_tests

RUN g++ main.cpp -o main -lgtest -lgtest_main -lpthread
RUN g++ test.cpp -o main_tests -lgtest -lgtest_main -lpthread


#This line defines the default command to run when the container starts. It specifies the path to your executable inside the container.
#CMD ["/app/hello"]

#ENTRYPOINT ["/app/main", "/app/main_tests --gtest_filter=*"]

ENTRYPOINT ["tail", "-f", "/dev/null"]



