{
  "name": "cleanfolio",
  "version": "0.1.0",
  "homepage": ".",
  "dependencies": {
    "@material-ui/core": "^4.12.3",
    "@material-ui/icons": "^4.11.2",
    "@testing-library/jest-dom": "^5.14.1",
    "@testing-library/react": "^12.0.0",
    "@testing-library/user-event": "^13.2.1",
    "gh-pages": "^3.2.3",
    "prop-types": "^15.7.2",
    "react": "^17.0.2",
    "react-dom": "^17.0.2",
    "react-scripts": "4.0.3",
    "uniqid": "^5.4.0",
    "web-vitals": "^2.1.0"
  },
  "scripts": {
    "start": "react-scripts start --openssl-legacy-provider",
    "build": "react-scripts build --openssl-legacy-provider",
    "test": "react-scripts test --openssl-legacy-provider",
    "eject": "react-scripts eject --openssl-legacy-provider",
    "lint": "eslint .",
    "format": "prettier --write \"**/*.+(js|jsx|json|css|md)\"",
    "deploy": "gh-pages -d build"
  },
  "browserslist": {
    "production": [
      ">0.2%",
      "not dead",
      "not op_mini all"
    ],
    "development": [
      "last 1 chrome version",
      "last 1 firefox version",
      "last 1 safari version"
    ]
  },
  "devDependencies": {
    "eslint": "^7.32.0",
    "eslint-config-airbnb": "18.2.1",
    "eslint-config-prettier": "^8.3.0",
    "eslint-plugin-import": "^2.24.2",
    "eslint-plugin-jsx-a11y": "^6.4.1",
    "eslint-plugin-prettier": "^4.0.0",
    "eslint-plugin-react": "^7.25.1",
    "eslint-plugin-react-hooks": "^4.2.0",
    "prettier": "^2.3.2"
  }
}
