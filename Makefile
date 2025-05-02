# Nome do executável
EXEC = sistema.exe

# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -Wall -std=c++17

# Arquivos-fonte
SRCS = sistema.cpp contabancaria.cpp cliente.cpp

# Objetos (opcional, se quiser compilar por etapas)
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(EXEC)

# Regra de compilação
$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRCS)

# Limpar arquivos gerados
clean:
	del /Q *.o *.exe 2>nul

# Apenas limpar o executável
clean-exe:
	del /Q $(EXEC) 2>nul
