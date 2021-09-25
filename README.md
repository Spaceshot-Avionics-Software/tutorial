# Avionics Software Bootcamp: GitHub and C++ 

Thanks for joining us in our GitHub and C++ bootcamp! This is a very basic software tutorial to gaion a firm foundation for our work on the avionics system for Spaceshot. Students will learn the GitHub basics of cloning, pushing, and pulling over command line, run a hello world program in C++, and finally create their own C++ class.

## Step 1: Prerequisite Check
Most of you should already have this step done, but for those who weren't at the last meeting, this is a very important step. If you already have VS Code with C++ and Platformio installed, you can move on to step 2. 

### Install Visual Studio Code 
Click the following link: https://code.visualstudio.com/

VS Code is a great coding editor and offers some great extensions. 

We highly recommend you download the following in the **extensions tab** of VS Code
- C/C++ by Microsoft
  -   The C/C++ extension adds language support for C/C++ to Visual Studio Code, including features such as IntelliSense and debugging.
- PlatformIO IDE
  - This is a professional collaborative platform for embedded development. As you will learn later, we will be using a RTOS called ChibiOS. PlatformIO gives us a nice way to run our code onto our PCB :)
- Doxygen Documentation Generator
  - Documentation is so so important, especially when doing complicated software. Doxygen lets you easily document code in an easy and organized way.

### Install Git

Click the following link: https://git-scm.com/

Git is a fantastic version control system that pairs nicely with GitHub. The difference between the two is that GitHub is a cloud based version control system, allowing everyone to work together on a project. Git lets you keep track of your **own** version history and allows you to pull and push up to GitHub through the command line.

There is a command line interface (CLI) that comes with this download called Git that is a great tool to use as well. You don't have to use the Git CLI, but for windows users, it is so much better than Command Prompt (ew).


## Step 2: Clone the Repository
To get started, you will be cloning this google classroom repository to your local computer! Run the following commands on Git or your preferred command line.

```
git clone <GitHub Repo URL>
cd <GitHub Repo Name>
code
```

The prompt `code` is nothing special. It just opens VSCode in your current folder. Once VSCode is opened and you see the correct file, you are good to move onto step 3.

## Step 3: Hello, World!


