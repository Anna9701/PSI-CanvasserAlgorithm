.PHONY: clean All

All:
	@echo "----------Building project:[ PSILaboratory - Debug ]----------"
	@"$(MAKE)" -f  "PSILaboratory.mk"
clean:
	@echo "----------Cleaning project:[ PSILaboratory - Debug ]----------"
	@"$(MAKE)" -f  "PSILaboratory.mk" clean
