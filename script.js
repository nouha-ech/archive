async function convertir()  {
    const value = document.getElementById("value").value;
    const currency = document.getElementsById("currency").value;
    const apikey = 'c840a45fc80f95dc8b99b4c8';
    const url = `https://v6.exchangerate-api.com/v6/${apiKey}/latest/AED`;
    
    try {
        const response = await fetch (url);
        const data = await response.json();
        const rate = data.conversion_rates[currency];
        const valeurconvertie = (value * rate).toFixed(2);

        document.getElementsById('resultat').innertext = '${value}  = ${valeurconvertie} ${currency}';
    }
    catch (error) {
        document.getElementsById('resultat').innertext = 'Erreur';
        console.error('Une erreur lors de la conversion',error);
    }

}