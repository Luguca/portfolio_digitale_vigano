<script>
  import { base } from '$app/paths';
  let videoSource = "{base}/Progetto_1522_video_di_come_funziona.mp4";
  
  // Immagini aggiornate con i tuoi percorsi reali
  let imgItaliano1 = "${base}/libro_roberto.jfif";
  let imgItaliano2 = "${base}/primo_levi.png";
  let imgStoria1 = "${base}/progetto_lebensborn.png";
  let imgStoria2 = "${base}/T4.png";
  let imgStoria3 = "${base}/percorso_immagine_storia3.png";
  let imgStoria4 = "${base}/movimento_68.png";

  // Il tuo link Google Doc reale integrato
  let embedGoogleDocs = "https://docs.google.com/document/d/e/2PACX-1vSz-HeGuK_jArLx5N8Gi8NcTecpx8Ft3QX7ed7FIoasQUeSH2uDEej2HwUMwKLcNMxpUR9axtxFFhHB/pub?embedded=true";
  
  let currentSubject = $state("italiano");
</script>

<nav class="navbar">
  <div class="nav-container">
    <a href="{base}/" class="brand">Portfolio</a>
    <div class="nav-links">
      <a href="{base}/">Home</a>
      <a href="{base}/terzo_anno">Terzo Anno</a>
      <a href="{base}/quarto_anno">Quarto Anno</a>
      <a href="{base}/quinto_anno" class="active">Quinto Anno</a>
    </div>
  </div>
</nav>

<main class="page-container">
  <header class="page-header">
    <h1>Quinto Anno</h1>
    <p class="page-subtitle">Sviluppo Web Avanzato e Progetti di Sensibilizzazione</p>
  </header>

  <div class="sub-navbar">
    <button class="sub-nav-link {currentSubject === 'italiano' ? 'active' : ''}" onclick={() => currentSubject = 'italiano'}>
      Italiano
    </button>
    <button class="sub-nav-link {currentSubject === 'storia' ? 'active' : ''}" onclick={() => currentSubject = 'storia'}>
      Storia
    </button>
    <button class="sub-nav-link {currentSubject === 'informatica' ? 'active' : ''}" onclick={() => currentSubject = 'informatica'}>
      Informatica
    </button>
  </div>

  {#if currentSubject === 'italiano'}
    <div class="subject-grid">
      
      <section class="content-card">
        <h2 class="card-title">Prigione Domestica</h2>
        <p class="card-text">
          In questa ricerca abbiamo analizzato il phenomenon della violenza domestica, con particolare attenzione al ruolo dei centri antiviolenza e alle strategie di prevenzione. Il documento completo è disponibile qui sotto.
        </p>
        
        <div class="doc-container">
          <iframe 
            src={embedGoogleDocs} 
            title="Relazione di Italiano - Google Docs"
            frameborder="0" 
            allowfullscreen="true"
          ></iframe>
        </div>
      </section>

      <section class="content-card card-split">
        <div class="card-left-text">
          <h2 class="card-title">Lettura di "L'amore mio non muore" di Roberto Saviano e incontro con l'autore</h2>
          <p class="card-text">
            Trama: Il libro racconta la storia di una donna che, dopo essere stata vittima di violenza domestica, riesce a liberarsi grazie al supporto di un centro antiviolenza. Attraverso la narrazione, Saviano esplora le dinamiche della violenza e l'importance del sostegno sociale.
            Durante L'incontro abbiamo avuto l'opportunità di fare domande all'autore basandoci sul libro letto, esplorando vari temi anche al di fuori di quello parlato nel libro.
          </p>
        </div>
        <div class="card-right-img">
          <div class="image-box-simple">
            <img src={imgItaliano1} alt="Copertina del libro" />
            <div class="image-label">Copertina del libro</div>
          </div>
        </div>
      </section>

      <section class="content-card card-split">
        <div class="card-left-text">
          <h2 class="card-title">Primo Levi: la "Zona Grigia"</h2>
          <p class="card-text">
            Primo Levi, sopravvissuto ad Auschwitz, ha coniato il termine "Zona Grigia" per descrivere la complessità morale dei prigionieri che, pur essendo vittime, collaboravano con i nazisti per sopravvivere. Questa riflessione ci ha portato a discutere delle sfumature etiche e delle scelte difficili in situazioni estreme.
          </p>
        </div>
        <div class="card-right-img">
          <div class="image-box-simple">
            <img src={imgItaliano2} alt="Primo Levi" />
            <div class="image-label">trama dei "I sommersi e i salvati" e spiegazione della Zona Grigia</div>
          </div>
        </div>
      </section>

    </div>

  {:else if currentSubject === 'storia'}
    <div class="subject-grid">
      
      <section class="content-card">
        <div class="storia-split-top">
          <div class="storia-text">
            <h2 class="card-title">Akiton T4 e il progetto Lebensborn</h2>
            <p class="card-text">
              Il progetto Lebensborn, avviato dalla Germania nazista, mirava a promuovere la crescita della "razza ariana" attraverso la selezione e l'incoraggiamento alla procreazione di individui considerati "puri". Parallelamente, l'Aktion T4 rappresentava il programma di eutanasia che portò alla morte di migliaia di persone ritenute "indegne di vivere". Questi events evidenziano le tragiche conseguenze delle ideologie razziste e totalitarie del XX secolo.
            </p>
          </div>
          <div class="storia-img-side">
            <div class="image-box-simple">
              <img src={imgStoria1} alt="Progetto Lebensborn" />
              <div class="image-label">Il progetto Lebensborn</div>
            </div>
          </div>
        </div>
        
        <div class="storia-img-bottom">
          <div class="image-box-simple">
            <img src={imgStoria2} alt="Aktion T4" />
            <div class="image-label">Documentazione Aktion T4</div>
          </div>
        </div>
      </section>

      <section class="content-card">
        <h2 class="card-title">La Nascita della Costituzione Italiana</h2>
        <p class="card-text">
          Il passaggio dalla monarchia alla repubblica attraverso il referendum del 1946. Di seguito sono riportati i Principi Fondamentali espressi nei primi dodici articoli.
        </p>
        
        <div class="table-responsive-wrapper">
          <table class="storia-table">
            <thead>
              <tr>
                <th style="width: 33.33%;">Articolo e Principio</th>
                <th style="width: 33.33%;">Articolo e Principio</th>
                <th style="width: 33.33%;">Articolo e Principio</th>
              </tr>
            </thead>
            <tbody>
              <tr>
                <td>
                  <strong>Articolo 1 (Democrazia e Lavoro)</strong><br>
                  L'Italia è una Repubblica democratica, fondata sul lavoro. La sovranità appartiene al popolo, che la esercita nelle forme e nei limiti della Costituzione.
                </td>
                <td>
                  <strong>Articolo 2 (Diritti Inviolabili)</strong><br>
                  La Repubblica riconosce e garantisce i diritti inviolabili dell'uomo, sia come singolo sia nelle formazioni sociali ove si svolge la sua personalità.
                </td>
                <td>
                  <strong>Articolo 3 (Uguaglianza)</strong><br>
                  Tutti i cittadini hanno pari dignità sociale e sono eguali davanti alla legge, senza distinzione di sesso, di razza, di lingua, di religione, di opinioni politiche, di condizioni personali e sociali.
                </td>
              </tr>
              <tr>
                <td>
                  <strong>Articolo 4 (Diritto al Lavoro)</strong><br>
                  La Repubblica riconosce a tutti i cittadini il diritto al lavoro e promuove le condizioni che rendano effettivo questo diritto.
                </td>
                <td>
                  <strong>Articolo 5 (Unità e Autonomie)</strong><br>
                  La Repubblica, una e indivisibile, riconosce e promuove le autonomie locali; attua nei servizi che dipendono dallo Stato il più ampio decentramento amministrativo.
                </td>
                <td>
                  <strong>Articolo 6 (Minoranze Linguistiche)</strong><br>
                  La Repubblica tutela con apposite norme le minoranze linguistiche.
                </td>
              </tr>
              <tr>
                <td>
                  <strong>Articolo 7 (Stato e Chiesa)</strong><br>
                  Lo Stato e la Chiesa cattolica sono, ciascuno nel proprio ordine, indipendenti e sovrani. I loro rapporti sono regolati dai Patti Lateranensi.
                </td>
                <td>
                  <strong>Articolo 8 (Libertà Religiosa)</strong><br>
                  Tutte le confessioni religiose sono egualmente libere davanti alla legge. Le confessioni diverse dalla cattolica hanno diritto di organizzarsi secondo i propri statuti.
                </td>
                <td>
                  <strong>Articolo 9 (Cultura e Ambiente)</strong><br>
                  La Repubblica promuove lo sviluppo della cultura e la ricerca scientifica e tecnica. Tutela il paesaggio, il patrimonio storico-artistico, l'ambiente, la biodiversità e gli ecosistemi.
                </td>
              </tr>
              <tr>
                <td>
                  <strong>Articolo 10 (Diritto Internazionale)</strong><br>
                  L'ordinamento giuridico italiano si conforma alle norme del diritto internazionale generalmente riconosciute. Lo straniero, al quale sia impedito nel suo paese l'effettivo esercizio delle libertà democratiche, ha diritto d'asilo.
                </td>
                <td>
                  <strong>Articolo 11 (Ripudio della Guerra)</strong><br>
                  L'Italia ripudia la guerra come strumento di offesa alla libertà degli altri popoli e come mezzo di risoluzione delle controversie internazionali.
                </td>
                <td>
                  <strong>Articolo 12 (La Bandiera)</strong><br>
                  La bandiera della Repubblica è il tricolore italiano: verde, bianco e rosso, a tre bande verticali di eguali dimensioni.
                </td>
              </tr>
            </tbody>
          </table>
        </div>
      </section>

      <section class="content-card card-split">
        <div class="card-left-text">
          <h2 class="card-title">Il movimento del 1968</h2>
          <p class="card-text">
            Durante la divisione dell'Europa in blocchi contrapposti, il movimento del 1968 rappresentò una protesta globale contro le ingiustizie sociali, politiche e culturali. In Italia, questo movimento si manifestò 
            con proteste studentesche contro la guerra del Vietnam, la richiesta di una scuola meno autoritaria e la rivendicazione di maggiore libertà per i giovani.
            Ciò portò al cosiddetto "autunno caldo", in cui i sindacati CGIL, CISL e UIL organizzarono una serie di scioperi e manifestazioni per chiedere migliori condizioni di lavoro e diritti sindacali, 
            ottenendo infine lo Statuto dei Lavoratori, che riconosceva stabilmente i diritti di chi lavora.
          </p>
        </div>
        <div class="card-right-img">
          <div class="image-box-simple">
            <img src={imgStoria4} alt="L'Europa" />
            <div class="image-label">Protesta studentesca del 1968</div>
          </div>
        </div>
      </section>

    </div>

  {:else if currentSubject === 'informatica'}
    <section class="content-card">
      <h2 class="card-title">Progetto 1522: Come Funziona</h2>
      <p class="card-text">
        In questa sezione è mostrato il funzionamento del portale dedicato al numero antiviolenza 1522.
      </p>

      <div class="editor-window">
        <div class="editor-header">
          <div class="header-dots">
            <span class="h-dot h-red"></span>
            <span class="h-dot h-yellow"></span>
            <span class="h-dot h-green"></span>
          </div>
          <div class="header-title">Progetto_1522_video_di_come_funziona.mp4</div>
        </div>
        <div class="video-wrapper">
          <video src={videoSource} controls preload="metadata">
            <track kind="captions" />
            Il tuo browser non supporta il tag video.
          </video>
        </div>
      </div>
    </section>
  {/if}
</main>

<style>
  :global(body) {
    margin: 0;
    padding: 0;
    background-color: rgb(221, 221, 221);
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
  }

  /* Navbar Principale */
  .navbar {
    background: white;
    padding: 20px 0;
    border-bottom: 1px solid #d0d0d0;
    position: sticky;
    top: 0;
    z-index: 1000;
  }

  .nav-container {
    max-width: 1200px;
    margin: 0 auto;
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 0 40px;
  }

  .brand {
    font-size: 1.4rem;
    font-weight: 800;
    color: #ff4500;
    text-decoration: none;
  }

  .nav-links a {
    margin-left: 25px;
    text-decoration: none;
    color: #444;
    font-size: 0.95rem;
    font-weight: 500;
    transition: color 0.2s;
  }

  .nav-links a.active, .nav-links a:hover {
    color: #007bff;
  }

  /* Sub-Navbar Interna */
  .sub-navbar {
    display: flex;
    justify-content: center;
    gap: 10px;
    margin-bottom: 35px;
    border-bottom: 2px solid rgba(0, 0, 0, 0.12);
    padding-bottom: 15px;
  }

  .sub-nav-link {
    background: none;
    border: none;
    color: #444;
    font-family: inherit;
    font-size: 1rem;
    font-weight: 600;
    padding: 8px 20px;
    cursor: pointer;
    border-radius: 20px;
    transition: all 0.2s ease;
  }

  .sub-nav-link:hover {
    color: #ff4500;
    background-color: rgba(255, 69, 0, 0.08);
  }

  .sub-nav-link.active {
    color: white;
    background-color: #ff4500;
  }

  /* Layout */
  .page-container {
    max-width: 1000px;
    margin: 0 auto;
    padding: 60px 20px;
  }

  .page-header {
    text-align: center;
    margin-bottom: 40px;
  }

  .page-header h1 {
    font-size: 3rem;
    color: #222;
    margin: 0;
  }

  .page-subtitle {
    color: #444;
    font-size: 1.1rem;
    margin-top: 10px;
  }

  .subject-grid {
    display: flex;
    flex-direction: column;
    gap: 40px;
  }

  /* Sfondo dei contenuti */
  .content-card {
    background-color: rgb(241, 241, 241);
    border-radius: 12px;
    padding: 50px;
    box-shadow: 0 10px 30px rgba(0,0,0,0.06);
  }

  /* Layout affiancato equo (50/50) */
  .card-split {
    display: flex;
    align-items: center;
    gap: 45px;
  }

  .card-left-text {
    flex: 1;
  }

  .card-right-img {
    flex: 1;
    max-width: 420px;
  }

  .card-right-img .image-box-simple {
    margin-top: 0;
  }

  /* Struttura immagini miste per Storia Riquadro 1 */
  .storia-split-top {
    display: flex;
    align-items: center;
    gap: 45px;
  }

  .storia-text {
    flex: 1;
  }

  .storia-img-side {
    flex: 1;
    max-width: 250px; 
    margin: 0 auto;
  }

  .storia-img-side .image-box-simple {
    margin-top: 0;
  }

  .storia-img-bottom {
    margin-top: 25px;
    width: 100%;
  }

  /* Tabella Storia Riquadro 2 */
  .table-responsive-wrapper {
    width: 100%;
    overflow-x: auto;
    margin-top: 20px;
    border-radius: 6px;
    border: 1px solid #cccccc;
  }

  .storia-table {
    width: 100%;
    border-collapse: collapse;
    background: #fff;
    text-align: left;
    min-width: 750px;
  }

  .storia-table th {
    background-color: #ff4500;
    color: white;
    padding: 14px 18px;
    font-weight: 600;
    font-size: 1rem;
    border: 1px solid #ff4500;
  }

  .storia-table td {
    padding: 16px 18px;
    border: 1px solid #dddddd;
    color: #222;
    vertical-align: top;
    font-size: 0.95rem;
    line-height: 1.5;
  }

  .storia-table td strong {
    color: #ff4500;
    display: inline-block;
    margin-bottom: 6px;
  }

  .card-title {
    color: #ff4500;
    font-size: 1.8rem;
    margin-top: 0;
    margin-bottom: 15px;
  }

  .card-text {
    color: #222;
    line-height: 1.7;
    margin-bottom: 0;
  }

  .content-card:not(.card-split):not(:has(.storia-split-top)) .card-text {
    margin-bottom: 25px;
  }

  /* Contenitore Google Doc */
  .doc-container {
    width: 100%;
    height: 600px;
    border-radius: 8px;
    overflow: hidden;
    border: 1px solid #b5b5b5;
    box-shadow: inset 0 2px 8px rgba(0,0,0,0.05);
    background: #fff;
    margin-top: 20px;
  }

  .doc-container iframe {
    width: 100%;
    height: 100%;
    display: block;
  }

  /* Box Immagini */
  .image-box-simple {
    width: 100%;
    border-radius: 8px;
    overflow: hidden;
    border: 1px solid #cccccc;
    background: #fff;
    margin-top: 20px;
  }

  .image-box-simple img {
    width: 100%;
    height: auto;
    display: block;
  }

  .image-label {
    background: #e2e2e2;
    padding: 12px;
    text-align: center;
    font-size: 0.85rem;
    color: #333;
    border-top: 1px solid #cccccc;
    font-weight: 500;
  }

  /* Finestra Video Dark (Informatica) */
  .editor-window {
    background: #2d2d2d;
    border-radius: 8px;
    overflow: hidden;
    box-shadow: 0 20px 40px rgba(0,0,0,0.2);
    margin-top: 20px;
  }

  .editor-header {
    background: #333;
    padding: 12px 20px;
    display: flex;
    align-items: center;
  }

  .header-dots { display: flex; gap: 8px; margin-right: 20px; }
  .h-dot { width: 12px; height: 12px; border-radius: 50%; }
  .h-red { background: #ff5f56; }
  .h-yellow { background: #ffbd2e; }
  .h-green { background: #27c93f; }

  .header-title {
    color: #9cdcfe;
    font-family: monospace;
    font-size: 14px;
  }

  .video-wrapper {
    background: #000;
    line-height: 0;
  }

  video {
    width: 100%;
    display: block;
    aspect-ratio: 16 / 9;
  }

  /* Gestione Responsive Mobile */
  @media (max-width: 768px) {
    .page-container { padding: 30px 15px; }
    .content-card { padding: 30px 20px; }
    
    .card-split, .storia-split-top {
      flex-direction: column;
      gap: 20px;
    }
    .card-right-img, .storia-img-side {
      max-width: 100%;
      width: 100%;
    }
    .card-right-img .image-box-simple, .storia-img-side .image-box-simple {
      margin-top: 10px;
    }

    .page-header h1 { font-size: 2.2rem; }
    .nav-container { padding: 0 20px; }
    .sub-navbar { flex-wrap: wrap; gap: 5px; }
    .sub-nav-link { padding: 6px 12px; font-size: 0.9rem; }
    .doc-container { height: 450px; }
  }
</style>