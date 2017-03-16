## by @natalha

#Nome do executavel que será gerado
EXE = geometrica

#Nome do diretório de arquivos source em c++ (.cpp)
SRC_DIR = src
#Nome do diretório de objetos (.o) que serão gerados a partir dos .cpp's
OBJ_DIR = bin

#Lista com nome de todos arquivos .cpp em $(SRC_DIR)
SRC = $(wildcard $(SRC_DIR)/*.cpp)
#Lista gerada a partir da transformaç]ao dos nomes da lista $(SRC), substituindo o diretorio
#$(SRC_DIR) por $(OBJ_DIR) e a extenção dos arquivos (de .cpp para .o)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

#Compilador
CC = g++
#Flag que inclui o diretorio include/ na compilação
CPPFLAGS += -I include
#Flags que pede pro compliador mostrar todas as mensagens de alerta (-Wall) e
#diz qual a versão do c++ a ser usada (c++11)
CFLAGS += -Wall -std=c++11

###############
## A L V O S ##
###############

#Alvo phony. indica tem como dependência alvos da makefile que não precisam de dependências
#para serem executados
.PHONY: all clean

#O alvo padrão do makefile vai chamar o arquivo/alvo $(EXE)
all: $(EXE)

#$(EXE) vai ser executado caso haja alteração nos arquivos $(OBJ).
#Este comando junta os arquivos .o para gerar um executavel.
$(EXE): $(OBJ)
	$(CC) $^ -o $@
	
#Gera arquivos .o dos .cpp situados no diretorio src/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

#Deleta os arquivos $(OBJ). $(RM) é um alvo do makefile que ja vem definido como "rm"
clean:
	$(RM) $(OBJ)
