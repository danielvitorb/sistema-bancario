# Variáveis
CC = g++                                    # Compilador
CFLAGS = -Wall -pedantic -O0 -g             # Flags do compilador
OBJ = sistema.o contabancaria.o cliente.o   # Objetos
EXEC = sistema.exe                          # Nome do arquivo executável

# Regra principal
all: $(EXEC)

# Como gerar o executável
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Como gerar os arquivos .o (objetos)
sistema.o: sistema.cpp contabancaria.h cliente.h
	$(CC) $(CFLAGS) -c sistema.cpp

contabancaria.o: contabancaria.cpp contabancaria.h cliente.h
	$(CC) $(CFLAGS) -c contabancaria.cpp

cliente.o: cliente.cpp cliente.h
	$(CC) $(CFLAGS) -c cliente.cpp

# Limpeza dos arquivos gerados
clean:
	del /f /q $(OBJ) $(EXEC)

# Rodar o programa após a compilação
run: $(EXEC)
	$(EXEC)