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

There is a command line interface (CLI) that comes with this download called Git Bash that is a great tool to use as well. You don't have to use the Git CLI, but for windows users, it is so much better than Command Prompt (ew).

### MinGW (Windows Only)

If you are on a windows computer and are just starting out, it's likely you don't have the necessary compilers and debuggers installed.

To check, run
```
g++ --version
```
If g++ is already installed, you can move on. If not, take a look here: https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites

Follow the directions for adding MinGW to your path environment and after the g++ command works, move onto step 2. 


## Step 2: Clone the Repository
To get started, you will be cloning this google classroom repository to your local computer! Run the following commands on Git Bash or your preferred command line.

```
git clone <GitHub Repo URL>
cd <GitHub Repo Name>
code .
```

The prompt `code .` is nothing special. It just opens VSCode in your current directory. Once VSCode is opened and you see the correct file, you are good to move onto step 3.



## Step 3: Hello, World!

Click on the file called `hello.cpp`.

On command line create an executable file
```
g++ hello.cpp -o hello
```
Now, run your new program!

```
./hello
```

## Step 4: Challenge

Let's start by creating a new branch. This allows you to make changes on difficult code while also keeping your main brnch of code in tact until you want to merge the two.

```
git checkout -b <branch_name>
```
Once you've switched to your new branch, open the folder called `class_challenge`.

### Challenge

Your challenge is to create an animal class that takes 3 important features: `type_`, `name_`, and `age_`. Functions descriptions are prewritten and can be found in `Animal.h`. Here are a few things to consider:

- Make sure all of your class variables are private! This means that you WILL have to create getter methods to have main.cpp run correctly.

- You only need to change the code in `Animal.h` and `Animal.cpp`. (Anywhere that says "Your code here")


You can compile and run your code by typing the following into the terminal:

```
g++ -o main Animal.h Animal.cpp main.cpp
./main
```

The output should look like this: 

```
Animal Type: Dog
Animal Name: Barry
Animal Age: 3
Happy birthday, Barry!
Animal Age: 4
```

The solution can be found in the `class_challenge_solution` folder, but please try not to use it! You can do this without the solution code.

### Pushing to GitHub

Check which files you've changed.

```
git status
```

Add the files to be tracked/committed. If everything looks good from the status, add everything. 

Note that you can also add individual files you've changed as well.

```
git add -A
```

Commit your changes

```
git commit -m "Your message here"
```

Push your changes from this branch up to GitHub to be reviewed!

```
git push --set-upstream origin <branch_name>
```

### GitHub Pull Request

Create a pull request on GitHub and have us listed as reviewers.

Merge your code into the master branch once we have reviewed your code!

After this is done, make sure to delete your old branch and pull the newest changes back to your local computer.

Get back to the main/master branch. This is commonly called either main or master, so if master doesn't work, try main.

```
git checkout master
```

Pull changes from the merge you just completed.

```
git pull origin master
```

Delete your old branch.

```
git branch -d <branch_name>
```

Congratulations! You've just completed the avionics software bootcamp!


