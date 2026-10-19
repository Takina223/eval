#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

vector<value>values;

struct value {
    string assetName;
    string assetType; // "Stock" or "Crypto"

    // --- Stock Fundamental Ratios ---
    float peRatio;       // P/E = Market Price / EPS
    float pbRatio;       // P/B = Price / BVPS [BVPS = (Assets - Liab) / Shares]
    float pegRatio;      // PEG = (P/E) / Annual EPS Growth Rate (%)
    float roe;           // ROE % = (Net Income / Shareholders Equity) * 100
    float debtToEquity;  // D/E = Total Liabilities / Shareholders Equity
    float dividendYield; // Div Yield % = (Annual Div per Share / Price) * 100

    // --- Crypto On-Chain Ratios ---
    float mvrvRatio;     // MVRV = Market Cap / Realized Cap
    float nvtRatio;      // NVT = Market Cap / 24h On-Chain Tx Vol
    float stockToFlow;   // S2F = Circulating Supply / Annual Issuance (Flow)

    // --- Technical & Volatility Indicators ---
    float rsi;           // RSI = 100 - [100 / (1 + (Avg Gain / Avg Loss))]
    float macdLine;      // MACD Line = 12 EMA - 26 EMA
    float bollingerUpper; // Upper BB = 20 SMA + (2 * stddev)
    float bollingerLower; // Lower BB = 20 SMA - (2 * stddev)
    float obv;           // OBV = Prev OBV +/- Current Vol (based on close direction)
};