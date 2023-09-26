# 编译器设置
CC ?= gcc
CFLAGS ?= -Wall -Wextra -g

# 目标文件
TARGET := 01_write_to_freed_memory_test

# 源代码文件
SRCS := 01_write_to_freed_memory_test.c

# 生成目标文件列表
OBJS := $(SRCS:.c=.o)

# 默认目标
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# 生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)