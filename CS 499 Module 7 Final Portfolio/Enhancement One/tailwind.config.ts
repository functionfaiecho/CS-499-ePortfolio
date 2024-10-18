import type { Config } from "tailwindcss";

const config: Config = {
  content: [
    "./pages/**/*.{js,ts,jsx,tsx,mdx}",
    "./components/**/*.{js,ts,jsx,tsx,mdx}",
    "./app/**/*.{js,ts,jsx,tsx,mdx}",
  ],
  theme: {
    extend: {
      // Add custom font family.
      fontFamily: {
        digitalClock: ['VT323', 'monospace'], /* Declaration of the font for the Clock.tsx and LiveClock.tsx */
        clockDesc: ['Space Grotesk', 'sans-serif'], /* Declaration of Space Grotesk, but default to sans serif. */
      },
      colors: {
        background: "#171219",
        textColour: "#EFEFEF",
        clockDigit12: "#139A43",
        clockDigit24: "#F4442E",
        clockBox: "#2C222F"

      },
    },
  },
  plugins: [],
};

export default config;
