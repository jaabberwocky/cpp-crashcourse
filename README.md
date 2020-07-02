# Crash Course in C++

Decided I wanted to refresh my memory on modern C++. 

Code and exercises following the excellent C++ Crash Course [book](https://nostarch.com/cppcrashcourse) by Joshua Lospinoso.


## C++ Setup for Mac
1. Install VS Code
2. Install Code Runner extension
3. Use C++11. Change user settings for the following: 
`"code-runner.executorMap":{
    "cpp": "cd $dir && g++ -std=c++11 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
},`
4. Run in terminal to allow input:
`{
    "code-runner.runInTerminal": true
}`