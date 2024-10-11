# Basis Web Scrapper Using Python by Sayed Mannan Ahmad

''' Installing Required Libraries: pip install requests beautifulsoup4 '''

import requests
from bs4 import BeautifulSoup
import csv
import json

def fetch_html(url):
    response = requests.get(url)
    if response.status_code == 200:
        return response.text
    else:
        raise Exception(f"Failed to fetch page: {response.status_code}")

def parse_html(html, data_type):
    soup = BeautifulSoup(html, 'html.parser')
    data = []

    if data_type == 'news':
        articles = soup.find_all('article')
        for article in articles:
            title = article.find('h2').get_text(strip=True)
            summary = article.find('p').get_text(strip=True)
            data.append({'title': title, 'summary': summary})
    elif data_type == 'products':
        products = soup.find_all('div', class_='product')
        for product in products:
            name = product.find('h2').get_text(strip=True)
            price = product.find('span', class_='price').get_text(strip=True)
            data.append({'name': name, 'price': price})
    
    return data

def save_to_csv(data, filename):
    keys = data.keys()
    with open(filename, 'w', newline='', encoding='utf-8') as output_file:
        dict_writer = csv.DictWriter(output_file, fieldnames=keys)
        dict_writer.writeheader()
        dict_writer.writerows(data)

def save_to_json(data, filename):
    with open(filename, 'w', encoding='utf-8') as output_file:
        json.dump(data, output_file, ensure_ascii=False, indent=4)

def main(url, data_type, output_format, filename):
    html = fetch_html(url)
    data = parse_html(html, data_type)
    
    if output_format == 'csv':
        save_to_csv(data, filename)
    elif output_format == 'json':
        save_to_json(data, filename)
    else:
        raise ValueError("Unsupported format. Use 'csv' or 'json'.")

if __name__ == "__main__":
    url = input("Enter the URL to scrape: ")
    data_type = input("Enter the type of data to scrape (news/products): ")
    output_format = input("Enter the output format (csv/json): ")
    filename = input("Enter the filename to save the data: ")
    
    main(url, data_type, output_format, filename)
