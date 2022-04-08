#### Install JDK and NetBeans
+ Install [JDK 8.2](https://www.oracle.com/java/technologies/downloads/#java8-windows). After installing, the JDK directory (located at C:\Program Files\Java\jdk1.8.0_321, by default) should have some folders: bin, include, jre, bin, ... The bin directory contains both <font style="color: orange">the compiler</font> and <font style="color: orange">the launcher</font>.
+ Install [NetBeans IDE 8.2](https://dl5.filehippo.com/f2a/e47/18d02fba0ad3b6e7ac2cf9f44e9489a740/netbeans-8.2-javase-windows.exe?Expires=1649458811&Signature=bdd8c8bffc556d7611858bee7a600e1ae4797cb0&url=https://filehippo.com/download_netbeans/&Filename=netbeans-8.2-javase-windows.exe)
+ Set the PATH environment variable to conveniently run executables (javac.exe, java.exe, javadoc.exe, etc.) from any directory without having to type the full path of the command (C:\Program Files\Java\jdk1.8.0_321\bin\java.exe HelloWorld). On Windows OS you can follow the below steps:
	+ Click Start button then type ```environment variables``` then select ```Edit the system environment variables```
	+ Add ```.;C:\Program Files\Java\jdk1.8.0_321\bin;```  to the ```Path``` value.

##### Some errors and how to fix them:
+ [How to fix error "Internal Error 61003"](https://stackoverflow.com/questions/63288426/java-development-kit-internal-error-61003): Install [Microsoft Visual C++ 2015 Redistributable](https://www.microsoft.com/en-us/download/details.aspx?id=52685) first

#### Just use Notepad to deeply understand how it works
1. Create a folder named ```test``` Open NotePad and write the following code then save as ```HelloWorld.java``` to the ```test``` folder
```java
public class HelloWorld{
	public static void main(String[] args){
		System.out.println("Hello World! I'm the first Java program.");
	}
}
```
2. Open ```terminal```  and change the current directory to the ```test``` folder
	+ Use the command ```javac HelloWorld.java``` to compile the source file ```HelloWorld.java``` to ```HelloWorldj.class```
	+ Use the command ```java HelloWorld``` to run the ```HelloWorld``` program
3. Create the ```bat``` file to compile and run with one click:
```cmd
@echo off
java HelloWorld.java
javac HelloWorld
pause
```
#### Use NetBeans
https://www.youtube.com/watch?v=gHGEetQ7GPM
