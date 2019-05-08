@echo off

cd /D "%~dp0"

IF NOT exist "P:\MyPrefix\" (
	echo Creating folder P:\MyPrefix\
	mkdir "P:\MyPrefix"
)

IF exist "P:\MyPrefix\MyMod\" (
	echo Removing existing link P:\MyPrefix\MyMod
	rmdir "P:\MyPrefix\MyMod\"
)

echo Creating link P:\MyPrefix\MyMod
mklink /J "P:\MyPrefix\MyMod\" "%cd%\MyPrefix\MyMod\"

echo Done