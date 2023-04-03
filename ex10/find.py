import requests

# Prompt the user to enter a Pokemon name
name = input("Enter the name of a Pokemon: ")

# Build the URL for the PokeAPI request
url = "https://pokeapi.co/api/v2/pokemon/{}".format(name.lower())

# Send the GET request to the PokeAPI and retrieve the response
response = requests.get(url)

# Check if the request was successful
if response.status_code == 200:
    # Parse the response JSON and extract the Pokemon's name and abilities
    data = response.json()
    abilities = [ability['ability']['name'] for ability in data['abilities']]
    
    # Print the Pokemon's name and abilities
    print("Name: {}".format(data['name'].capitalize()))
    print("Abilities:")
    for ability in abilities:
        print("- {}".format(ability.capitalize()))
else:
    # Display an error message if the request was not successful
    print("Error: Could not retrieve data for {}.".format(name.capitalize()))
