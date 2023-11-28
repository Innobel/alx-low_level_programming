#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

/**
 * @brief Print ELF header information.
 *
 * This function takes an Elf64_Ehdr structure representing the ELF header
 * and prints relevant information to the console.
 *
 * @param header Pointer to the Elf64_Ehdr structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf(" Magic:  ");

	for (i = 0, i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}

	printf("\n");

printf("  Class:                             %s\n", 
		header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n", header->e_ident[EI_DATA]
		== ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n",
		header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n",
		header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
printf("  ABI Version:                       %d\n",
		header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n",
		header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
printf("  Entry point address:               0x%lx\n",
		(unsigned long)header->e_entry);
}
	
