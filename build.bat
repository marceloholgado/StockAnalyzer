@echo off

:: Navegar para o diretório base
cd "C:\Projetos\C++\StockAnalyzer"

:: Remover o diretório Build, se ele existir
if exist Build (
    rmdir /s /q Build
)

:: Gerar os arquivos de build com o CMake
cmake -S . -B Build -G "MinGW Makefiles"

:: Entrar no diretório Build
cd Build

:: Executar o make
make