# Automated File Organizer

import os
import shutil

# Define the directory to be organized
directory = input("Enter the path of the directory to organize: ")

# Define file type categories and corresponding extensions
file_categories = {
    "Images": [".jpg", ".jpeg", ".png", ".gif", ".bmp", ".tiff", ".svg"],
    "Documents": [".pdf", ".doc", ".docx", ".txt", ".xlsx", ".xls", ".ppt", ".pptx", ".csv"],
    "Videos": [".mp4", ".avi", ".mov", ".wmv", ".mkv", ".flv"],
    "Music": [".mp3", ".wav", ".aac", ".flac", ".ogg"],
    "Archives": [".zip", ".rar", ".tar", ".gz", ".7z"],
    "Scripts": [".py", ".js", ".html", ".css", ".java", ".cpp", ".c"],
    "Executables": [".exe", ".bat", ".sh"],
    "Others": []
}

# Create folders for each category in the directory
def create_folders(directory, categories):
    for category in categories:
        folder_path = os.path.join(directory, category)
        if not os.path.exists(folder_path):
            os.makedirs(folder_path)

# Function to move files to the appropriate folder
def organize_files(directory, categories):
    for filename in os.listdir(directory):
        file_path = os.path.join(directory, filename)
        
        # Skip if it's a folder
        if os.path.isdir(file_path):
            continue

        # Find the file's extension
        file_extension = os.path.splitext(filename)[1].lower()

        # Move the file to the corresponding folder based on its extension
        moved = False
        for category, extensions in categories.items():
            if file_extension in extensions:
                shutil.move(file_path, os.path.join(directory, category, filename))
                print(f"Moved {filename} to {category} folder.")
                moved = True
                break

        # If the file doesn't match any category, move it to "Others"
        if not moved:
            shutil.move(file_path, os.path.join(directory, "Others", filename))
            print(f"Moved {filename} to Others folder.")

# Main function to run the organizer
def main():
    create_folders(directory, file_categories)
    organize_files(directory, file_categories)
    print("File organization complete.")

if __name__ == "__main__":
    main()
