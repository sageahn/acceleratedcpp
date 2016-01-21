git clone https://github.com/boostorg/boost.git boost

git clone https://github.com/boostorg/build.git boost\tools\build

pushd "boost\tools\build"
call "bootstrap.bat"
popd

.\boost\tools\build\b2.exe -sBOOST_ROOT=.\boost

