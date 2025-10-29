#!/usr/bin/env python3
"""
Automated File Organizer - Enhanced Edition

Features:
- Organizes files into categories (Images, Documents, Videos, etc.)
- Handles nested folders recursively
- Avoids overwriting files by renaming duplicates
- Logs actions to 'organizer_log.txt'
- Optional dry-run mode to preview changes
- Skips hidden/system files
"""

import os
import shutil

# ---------- Configuration ----------
directory = input("Enter the path of the directory to organize: ").strip()
dry_run = False  # Set True to preview changes without moving files

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

log_file = os.path.join(directory, "organizer_log.txt")

# ---------- Helper Functions ----------
def create_folders():
    """Create folders for each category."""
    for category in file_categories:
        folder_path = os.path.join(directory, category)
        if not os.path.exists(folder_path):
            os.makedirs(folder_path)

def move_file(file_path, category):
    """Move file safely, handling duplicates and logging."""
    filename = os.path.basename(file_path)
    target_folder = os.path.join(directory, category)
    target_path = os.path.join(target_folder, filename)

    # Handle duplicate filenames
    base, ext = os.path.splitext(filename)
    counter = 1
    while os.path.exists(target_path):
        filename = f"{base}({counter}){ext}"
        target_path = os.path.join(target_folder, filename)
        counter += 1

    # Move file
    if dry_run:
        print(f"[Dry-run] Would move {file_path} -> {target_path}")
    else:
        shutil.move(file_path, target_path)
        print(f"Moved {file_path} -> {target_path}")
        with open(log_file, "a") as log:
            log.write(f"Moved {file_path} -> {target_path}\n")

def categorize_file(file_path):
    """Determine file category and move it."""
    if os.path.isdir(file_path):
        return  # Skip folders
    filename = os.path.basename(file_path)
    if filename.startswith('.') or filename in ['Thumbs.db']:
        return  # Skip hidden/system files
    ext = os.path.splitext(filename)[1].lower()
    for category, extensions in file_categories.items():
        if ext in extensions:
            move_file(file_path, category)
            return
    move_file(file_path, "Others")

def organize_files():
    """Organize all files recursively."""
    for root, _, files in os.walk(directory):
        for file in files:
            file_path = os.path.join(root, file)
            categorize_file(file_path)

# ---------- Main ----------
def main():
    create_folders()
    organize_files()
    print("✅ File organization complete.")

if __name__ == "__main__":
    main()
