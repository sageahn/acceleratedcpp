@if not exist boost git clone https://github.com/boostorg/boost.git boost

pushd "boost"

:update_submodules
git submodule update --init
@if errorlevel 1 (
	rem if using wifi, this can be failed.
	@echo \"git submodule update\" was failed. Retry...
	goto update_submodules
)

call "bootstrap.bat"
@if errorlevel 1 exit /b %errorlevel%

b2.exe toolset=msvc -q
@if errorlevel 1 exit /b %errorlevel%

b2.exe install --prefix=.\
@if errorlevel 1 exit /b %errorlevel%

popd

