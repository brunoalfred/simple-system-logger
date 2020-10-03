COMPILER=gcc

file_writer:
    @$(COMPILER) -c src/file_writer/*.c -Iinclude/ -o bin/file_writer.o
    @echo "Built file_writer.o"

free_memory_api:
    @$(COMPILER) -c src/free_memory_api/*.c -Iinclude/ -o bin/free_memory_api.o 
    @echo "Built free_memory_api.o"

project:
    $(COMPILER) -c src/main.c -Iinclude/ -o bin/main.o
    @$(COMPILER) bin/free_memory_api.o bin/file_writer.o bin/main.o -o memlogger
    @echo "Finished building memlogger"