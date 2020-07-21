RASPI2_TTYD_OBJS = $(ROOT_DIR)/drivers/arch/raspi2/ttyd/ttyd.o

RASPI2_TTYD = $(TARGET_DIR)/$(ROOT_DIR)/drivers/raspi2/ttyd

PROGS += $(RASPI2_TTYD)
CLEAN += $(RASPI2_TTYD_OBJS)

$(RASPI2_TTYD): $(RASPI2_TTYD_OBJS)
	$(LD) -Ttext=100 $(RASPI2_TTYD_OBJS) -o $(RASPI2_TTYD) $(LDFLAGS) -lewokc -lc
