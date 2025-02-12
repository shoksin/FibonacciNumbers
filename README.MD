# How to Run

## Building:
```
1. cd build
2. cmake ..
3. cmake --build .
```

## Running:
```
PowerShell:
1. cd build\Debug
2. .\FibonacciSequence.exe
```

```
CMD:
1. cd build\Debug
2. FibonacciSequence.exe
```

Исправьте команду компиляции:

```powershell
g++ test.cpp -o test -I"googletest/googletest/include" -L"build/lib/Debug" -lgtest -lgtest_main -pthread```

Пояснение:

-I"googletest/googletest/include" — путь к заголовкам gtest.

-L"build/lib/Debug" — путь к собранным библиотекам gtest.

-lgtest -lgtest_main — линковка с библиотеками gtest.

-pthread — поддержка многопоточности (требуется для gtest).