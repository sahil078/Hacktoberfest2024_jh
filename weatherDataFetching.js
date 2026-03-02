function parseArgs() {
  const args = process.argv.slice(2);
  let cityParts = [];
  let unit = "metric";

  for (const value of args) {
    if (value.startsWith("--unit=")) {
      const selectedUnit = value.split("=")[1]?.toLowerCase();
      if (selectedUnit === "f" || selectedUnit === "imperial") {
        unit = "imperial";
      } else {
        unit = "metric";
      }
      continue;
    }
    cityParts.push(value);
  }

  return { city: cityParts.join(" ").trim(), unit };
}

async function getWeather(city, unit = "metric") {
  try {
    const apiKey = process.env.OPENWEATHER_API_KEY;
    if (!apiKey) {
      throw new Error("Missing OPENWEATHER_API_KEY environment variable.");
    }

    if (!city) {
      throw new Error("City is required. Example: node weatherDataFetching.js Paris --unit=c");
    }

    const response = await fetch(
      `https://api.openweathermap.org/data/2.5/weather?q=${encodeURIComponent(city)}&appid=${apiKey}&units=${unit}`
    );
    if (!response.ok) {
      throw new Error("Could not fetch weather. Check city name or API key.");
    }

    const data = await response.json();
    const symbol = unit === "imperial" ? "°F" : "°C";

    console.log(`Weather in ${data.name}:`);
    console.log(`- Temperature: ${data.main.temp}${symbol}`);
    console.log(`- Condition: ${data.weather[0].description}`);
    console.log(`- Humidity: ${data.main.humidity}%`);
    console.log(`- Wind Speed: ${data.wind.speed} ${unit === "imperial" ? "mph" : "m/s"}`);
  } catch (error) {
    console.log(`Error: ${error.message}`);
  }
}

const { city, unit } = parseArgs();
getWeather(city, unit);
