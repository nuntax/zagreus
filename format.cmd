for /r %t in (*.cpp *.h) do clang-format -i -style=llvm "%t"
