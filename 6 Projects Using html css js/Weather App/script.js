document.getElementById("searchButton").addEventListener('click', () => {
    const location = document.getElementById("searchBox").value;
    console.log(location);
    getData(location)
    document.getElementById("searchBox").value = "";
});

const getData= async (location)=>{
    const apikey="53b40ab3889f20ab61cde79a4b3163a5"
    if(location!=""){
        let response = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${location}&appid=${apikey}`)
        if(!response.ok) throw new Error("some issue with Input");
        let data = await response.json();
        processData(data,location)
    }
};

const processData=(data,location)=>{
    console.log(data)
    document.getElementById("temp").innerText=data['main']['temp']
    document.getElementById("city").innerText=location
    document.getElementById("Humidity").innerText="Humidity: "+data['main']['humidity']
    document.getElementById("wind").innerText="wind speed: "+ data['wind']['speed']
}