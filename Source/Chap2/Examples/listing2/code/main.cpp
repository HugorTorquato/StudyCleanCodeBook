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
2- Run the application with the image just created

    docker run hello
  
3- This combined command also works

  Using docker run --rm -it <image_name> <command>:

  [ " docker run --rm -it hello "]

  This approach builds and runs the image in a single step:

  docker run: Starts a container.
  --rm: Removes the container automatically after it exits.
  -it: Allocates a pseudo-TTY (terminal) and attaches it to the container, allowing you to interact with it.
  <image_name>: Specifies the name of the image to build and run.
  <command>: (Optional) The command to execute within the container. If omitted, the default command from the Dockerfile (if defined) will be used.

*/