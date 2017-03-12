# Specify compiler
CC=cl.exe
  
# Specify linker
LINK=link.exe
  
.PHONY : all
all : fusa
  
# Link the object files into a binary
fusa : main.o
    $(LINK) /OUT:fusa.exe main.o
 
# Compile the source files into object files
main.o : main.cpp
    $(CC) /c main.cpp /Fomain.o
  
# Clean target
.PHONY : clean
clean :
    rm main.o fusa 