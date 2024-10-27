async function getWeather(city) {
  try {
    const apiKey = 'your_api_key'; // Replace with your API key from a weather API provider like OpenWeatherMap
    const response = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`);
    if (!response.ok) throw new Error("City not found");
    const data = await response.json();
    console.log(`Weather in ${data.name}: ${data.main.temp}°C, ${data.weather[0].description}`);
  } catch (error) {
    console.log(error.message);
  }
}

// Example usage:
getWeather("New York");
