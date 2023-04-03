import requests

name = input("Enter the name of a Pokemon: ")

url = "https://pokeapi.co/api/v2/pokemon/{}".format(name.lower())

response = requests.get(url)

if response.status_code == 200:
    data = response.json()
    abilities = [ability['ability']['name'] for ability in data['abilities']]
    
    print(f"Name: {data['name'].capitalize()}")
    print("Abilities:")
    for ability in abilities:
        print("- {}".format(ability.capitalize()))
else:
    print("Error: Could not retrieve data for {}.".format(name.capitalize()))
