개힘듬 따라하기

1. http://www.seleniumhq.org/download/
-> 셀레니움 서버 다운 받는 곳

셀레니움 서버를 다운 받는다.

jar 파일일텐데 cmd 창에서 jar 파일이 있는 곳으로 이동한뒤에(cd 명령어)
java -jar selenium-server-standalone-3.4.0.jar 를 입력(jar 파일 이름을 입력하는 것)
그렇게되면 cmd 창에 selenium 서버가 구동된다.

2. visual studio로 프로젝트를 만든다.

3. 프로젝트 폴더에 git bash를 구동한다.

4. https://github.com/sekogan/webdriverxx여기로 들어가본다

5. Features를 보게되면 libcurl 과 picojson 이 dependecies라고 한다. 클릭하여 두 개를 다운 받아서 프로젝트에 import 시킨다.

6. libcurl 포함시키는 법
http://cdecl.egloos.com/m/132100

7. picojson 포함시키는 법
https://github.com/kazuho/picojson

프로젝트 폴더에 git clone하여 프로젝트에 포함시킨다.

8. webdriverxx 깃허브에 How to build and run tests 를 보게 되면 
CMake, PhantomJS, node.js, http-server가 필요하다고한다. 하나하나씩 다운한다.

9. CMake 다운 방법
https://cmake.org/download/ 에 자신의 기기에 맞는 버전을 다운 받는다. installer를 다운받을 것!!!
https://westwoodforever.blogspot.kr/2013/04/cmake-windows.html
여기를 보면 다운 받는 방법이 나온다.

10. PhantomJS 다운 방법
https://www.joecolantonio.com/2014/10/14/how-to-install-phantomjs/
여기를 보면 다운 받는 방법이 나온다.

11. node.js 다운 방법
알아서 잘 한다.

12. http-server 다운 방법
node.js의 npm이 필요하다.

npm 사용법


프로젝트 폴더에서 git bash 실행
npm install http-server 명령어 실행

13. How to build and run tests를 다시 보면 밑에 운영체제마다 build 하는 방법이 나온다.
보고 명령어대로 하면 된다. git bash에서 구동!
