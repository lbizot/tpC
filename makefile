# Makefile with dependencies management (Q4)

CXX        = g++
<<<<<<< HEAD
CXXFLAGS   = -Wall -Wextra -std=c++11
DEPFLAGS   = -MMD
LDFLAGS    = 
# Replace tp.cpp with the cpp files that need to be compiled
SRCS       = main_hotel.cpp hotel.cpp chambre.cpp
OBJS       = $(SRCS:.cpp=.o)
# Replace tp_main with the name you want to give to your executable file
TARGET     = res 
DEPS	   = $(OBJS:.o=.d)
=======
CXXFLAGS   = -Wall -Wextra -std=c++0x
DEPFLAGS   = -MMD
LDFLAGS    =
# Replace tp.cpp with the cpp files that need to be compiled
SRCS       = client.cpp main_client.cpp
OBJS       = $(SRCS:.cpp=.o)
# Replace tp_main with the name you want to give to your executable file
TARGET     = exec_tp
DEPS       = $(OBJS:.o=.d)
>>>>>>> classReservation

all: $(TARGET)

$(TARGET): $(OBJS)
<<<<<<< HEAD
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS) 
=======
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)
>>>>>>> classReservation

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

<<<<<<< HEAD
-include $(DEPS)
=======
-include $(DEPS)
>>>>>>> classReservation
