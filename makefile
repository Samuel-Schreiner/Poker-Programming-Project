SRC1 = Dealer.cpp
SRC2 = Card.cpp
SRC3 = Client.cpp
SRC4 = Player.cpp
OBJ1 = $(SRC1:.cpp=.o)
OBJ2 = $(SRC2:.cpp=.o)
OBJ3 = $(SRC3:.cpp=.o)
OBJ4 = $(SRC4:.cpp=.o)
EXE = $(SRC1:.cpp=.e)

HFILES = Card.h / Client.h / Player.h

CFLAGS = -g -std=c++11

all : $(EXE)
	
$(EXE): $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4)
	g++ $(CFLAGS) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) -o $(EXE)

$(OBJ1) : $(SRC1) $(HFILES)
	g++ -c $(CFLAGS) $(SRC1) -o $(OBJ1)

$(OBJ2) : $(SRC2) $(HFILES)
	g++ -c $(CFLAGS) $(SRC2) -o $(OBJ2)

$(OBJ3) : $(SRC3) $(HFILES)
	g++ -c $(CFLAGS) $(SRC3) -o $(OBJ3)

$(OBJ3) : $(SRC3) $(HFILES)
	g++ -c $(CFLAGS) $(SRC3) -o $(OBJ3)
