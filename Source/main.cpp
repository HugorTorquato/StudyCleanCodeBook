#include <iostream>

int main() {
  std::cout << "Hello, world!" << std::endl;
  return 0;
}

/* To run this in the container, follow the follwo steps

1- Build the image to copy the files and do everythign specified in the Dockerfile

    docker build -t hello .

    Where the neme after -t is just a tag for the image ( way to find it in the docker container list 
2- Run the application with the image just created

    docker run hello
*/