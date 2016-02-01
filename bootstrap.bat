git clone https://github.com/boostorg/boost.git boost

pushd "boost"
git submodule update --init
call "bootstrap.bat"
b2.exe toolset=msvc -q
b2.exe install --prefix=.\
popd

call "build.bat"

