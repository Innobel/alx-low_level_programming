#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define EN_NIDENT 16
/**
 * display_elf_header_info - Display information from the ELF header.
 * @elf_header: Pointer to the Elf64_Ehdr structure containing the ELF header.
 */
void display_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			(elf_header->e_ident[EI_DATA] == ELFDATA2MSB ?
			 "2's complement, big endian" : "Unknown"));
	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			elf_header->e_ident[EI_OSABI] == 0 ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			(elf_header->e_type == ET_DYN ? "DYN (Shared object file)" :
			 (elf_header->e_type == ET_REL ? "REL (Relocatable file)" : "Unknown")));
	printf("  Entry point address:               %lx\n",
			(unsigned long)elf_header->e_entry);
}
/**
 * error_message - Display an error message to stderr and exit with 98.
 * @message: The error message to be displayed.
 */
void error_message(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}
/**
 * main - Entry point for the ELF header display program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: Exit status.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t nread;

	if (argc != 2)
	{
		error_message("Usage: elf_headr elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_message("Error: Unable to open file");
	}

	nread = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (nread != sizeof(Elf64_Ehdr))
	{
		error_message("Error: Unable to read ELF header");
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error_message("Error: Not an ELF file");
	}

	display_elf_header_info(&elf_header);

	if (close(fd) == -1)
	{
		error_message("Error: Unable to close file");
	}

	return (0);
}
