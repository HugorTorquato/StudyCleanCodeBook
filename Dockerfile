
# I want to specify a version for c++
FROM gcc:11

# Sets the working directory inside the container to /app.
WORKDIR /app

# Copy all files to the working directory in the container
COPY /Source/* .

# This line builds your C++ code using g++ and creates an executable named hello.
RUN g++ main.cpp -o hello

#This line defines the default command to run when the container starts. It specifies the path to your executable inside the container.
CMD ["/app/hello"]