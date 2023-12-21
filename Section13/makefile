CXX=g++
CXXFLAGS=-std=c++11 -Wall

SRC_DIR=src
BUILD_DIR=build
TARGET=Section13

all: build

build:
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/$(TARGET) $(SRC_DIR)/*.cpp

clean:
	@rm -rf $(BUILD_DIR)

run:
	@./$(BUILD_DIR)/$(TARGET)

create-standard-file:
	@touch $(SRC_DIR)/$(TARGET).cpp
	@echo "#include <iostream>" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "int main() {" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "    std::cout << \"Hello World!\" << std::endl;" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "    return 0;" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "}" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "Created file: $(SRC_DIR)/$(TARGET).cpp"

create-class-file:
	@touch $(SRC_DIR)/$(TARGET).cpp
	@echo "#include <iostream>" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "class $(TARGET) {" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "public:" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "    $(TARGET)();" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "    ~$(TARGET)();" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "};" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "$(TARGET)::$(TARGET)() {" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "    std::cout << \"$(TARGET) constructor called\" << std::endl;" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "}" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "$(TARGET)::~$(TARGET)() {" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "    std::cout << \"$(TARGET) destructor called\" << std::endl;" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "}" >> $(SRC_DIR)/$(TARGET).cpp
	@echo "Created file: $(SRC_DIR)/$(TARGET).cpp"


