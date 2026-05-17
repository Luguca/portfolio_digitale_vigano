import adapter from '@sveltejs/adapter-static';
import { vitePreprocess } from '@sveltejs/vite-plugin-svelte';

/** @type {import('@sveltejs/kit').Config} */
const config = {
  preprocess: vitePreprocess(),
  kit: {
    adapter: adapter({
      pages: 'build',
      assets: 'build',
      fallback: '404.html', // Cruciale per far funzionare le rotte interne come /terzo_anno
      precompress: false,
      strict: true
    }),
    paths: {
      // Sostituisci 'portfolio_digitale_vigano' con il nome esatto della tua repository su GitHub
      base: process.argv.includes('dev') ? '' : '/portfolio_digitale_vigano'
    }
  }
};

export default config;