CC := clang
CFLAGS := -std=c17 -Wall -Wextra -Wpedantic
BUILD_DIR := build

.PHONY: clean FORCE

ch%: FORCE
	@echo "Building chapter $*..."
	@for f in ch$*/examples/*.c ch$*/exercises/*.c; do \
		[ -f "$$f" ] || continue; \
		out="$(BUILD_DIR)/$${f%.c}"; \
		mkdir -p "$$(dirname "$$out")"; \
		echo "→ $$f"; \
		$(CC) $(CFLAGS) "$$f" -o "$$out"; \
	done

clean:
	rm -rf $(BUILD_DIR)

FORCE: