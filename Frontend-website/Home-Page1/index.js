let cardpHTML='';
const cardp =[{
    image:'./s-logo.png',
    head:'Join Development',
    name1:'Blockchain',
    name2:'Development',
    image_body:'./card_body.png',
    btn_text:'Explore'
},{
    image:'./s-logo.png',
    head:'Join Development',
    name1:'Security',
    name2:'AAS',
    image_body:'./card_body.png',
    btn_text:'Explore'
},{
    image:'./s-logo.png',
    head:'Join Development',
    name1:'Motion',
    name2:'Graphic',
    image_body:'./card_body.png',
    btn_text:'Explore'
}];

cardp.forEach((c)=>{
    cardpHTML += `
        <div class="card-item">
            <div class="card-head">
                <img src=${c.image} width="30px">
                <h4>${c.head}</h4>
            </div>
            <div class="card-content">
                <h2>${c.name1}</h2>
                <h2>${c.name2}</h2>
                <img src=${c.image_body}>
            </div>
            <div class="card-btn">
                <button>${c.btn_text} <img src="./r-logo.png" width="25px"/></button>
            </div>
        </div>`;
});

document.querySelector('.card').innerHTML=cardpHTML;