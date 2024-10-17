# Automated File Organizer

This Python script automatically organizes files in a given directory by sorting them into folders based on their file types (e.g., Images, Documents, Videos, etc.).

## How It Works

- The script scans the directory and identifies the file type of each file based on its extension (e.g., `.jpg` for images, `.pdf` for documents).
- It then creates folders (if not already existing) for different file categories like `Images`, `Documents`, `Videos`, `Music`, etc.
- Files are moved into their corresponding folders. Files that don’t match any predefined category will be moved into the `Others` folder.

## Features

- **Organizes Files by Type**: Automatically categorizes files based on common file extensions.
- **Creates Folders Automatically**: Creates necessary folders if they don't exist.
- **Supports Various File Types**: Categorizes images, videos, documents, music, archives, scripts, and more.
- **Handles Miscellaneous Files**: Any files that don't fit into the predefined categories are moved to the `Others` folder.

## Supported File Categories and Extensions

- **Images**: `.jpg`, `.jpeg`, `.png`, `.gif`, `.bmp`, `.tiff`, `.svg`
- **Documents**: `.pdf`, `.doc`, `.docx`, `.txt`, `.xlsx`, `.xls`, `.ppt`, `.pptx`, `.csv`
- **Videos**: `.mp4`, `.avi`, `.mov`, `.wmv`, `.mkv`, `.flv`
- **Music**: `.mp3`, `.wav`, `.aac`, `.flac`, `.ogg`
- **Archives**: `.zip`, `.rar`, `.tar`, `.gz`, `.7z`
- **Scripts**: `.py`, `.js`, `.html`, `.css`, `.java`, `.cpp`, `.c`
- **Executables**: `.exe`, `.bat`, `.sh`
- **Others**: All other file types will be moved to the `Others` folder.

## Prerequisites

- **Python 3.x** must be installed on your system.
- The script uses built-in Python modules, so no additional libraries are required.


## Contributions

Feel free to fork this repository, submit issues, or make pull requests to enhance the functionality of the script. Any contribution is appreciated!

