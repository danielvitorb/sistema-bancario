# Nome do executável final
TARGET = sistemabancario

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Fontes e objetos
SRCS = sistemabancario.cpp contabancaria.cpp cliente.cpp
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Regra para compilar o programa final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Regra para compilar arquivos .cpp individualmente
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean:
	rm -f *.o $(TARGET)
